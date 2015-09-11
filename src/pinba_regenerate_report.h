/* This file is autogenerated, edit the original template instead! */

/* Copyright (c) 2007-2013 Antony Dovgal <tony@daylessday.org>

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

static inline pinba_report *pinba_regenerate_report_info(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT_INFO/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report_info_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report_info_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report1(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT1/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report1_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report1_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report2(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT2/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report2_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report2_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report3(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT3/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report3_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report3_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report4(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT4/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report4_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report4_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report5(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT5/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report5_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report5_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report6(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT6/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report6_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report6_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report7(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT7/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report7_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report7_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report8(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT8/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report8_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report8_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report9(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT9/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report9_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report9_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report10(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT10/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report10_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report10_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report11(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT11/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report11_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report11_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report12(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT12/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report12_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report12_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report13(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT13/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report13_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report13_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report14(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT14/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report14_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report14_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report15(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT15/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report15_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report15_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report16(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT16/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report16_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report16_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report17(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT17/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report17_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report17_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */


static inline pinba_report *pinba_regenerate_report18(PINBA_SHARE *share)/* pinba_regenerate_report9(PINBA_SHARE *share) */ /* {{{ */
{
	pinba_report *report;

	report = (pinba_report *)pinba_map_get(D->base_reports, share->index);
	if (!report) {

		report = (pinba_report *)calloc(1, sizeof(pinba_report));
		if (!report) {
			return NULL;
		}

		pinba_parse_conditions(share, (pinba_std_report *)report);

		report->std.index = strdup(share->index);
		report->std.type = PINBA_TABLE_REPORT18/*PINBA_TABLE_REPORT9*/;
		report->std.time_interval = 1;
		report->std.add_func = pinba_update_report18_add/*pinba_update_report9_add*/;
		report->std.delete_func = pinba_update_report18_delete/*pinba_update_report9_delete*/;
		pthread_rwlock_init(&report->std.lock, 0);

		D->base_reports = pinba_map_add(D->base_reports, share->index, report);

		if (pinba_array_add(&D->base_reports_arr, report) < 0) {
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

		if (!pinba_update_report_tables((pinba_std_report *)report, share->index)) {
			pinba_array_delete(&D->base_reports_arr, report);
			pinba_map_delete(D->base_reports, share->index);
			pthread_rwlock_destroy(&report->std.lock);
			free(report);
			return NULL;
		}

	} else {
		return report;
	}

	return report;
}
/* }}} */

