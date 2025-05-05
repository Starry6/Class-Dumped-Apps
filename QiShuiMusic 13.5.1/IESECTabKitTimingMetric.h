@interface IESECTabKitTimingMetric : NSObject
@property (nonatomic) double t_page_route_start;
@property (nonatomic) double t_page_init_start;
@property (nonatomic) double t_page_init_end;
@property (nonatomic) double t_request_start;
@property (nonatomic) double t_request_end;
@property (nonatomic) double t_start_pre_create_annie;
@property (nonatomic) double t_finish_pre_create_annie_model;
@property (nonatomic) double t_finish_pre_create_annie_web;
- (double)t_finish_pre_create_annie_model;
- (double)t_request_start;
- (double)t_page_init_end;
- (void)setT_finish_pre_create_annie_model:;
- (void)setT_finish_pre_create_annie_web:;
- (void)setT_page_init_end:;
- (void)setT_page_init_start:;
- (void)setT_page_route_start:;
- (void)setT_request_end:;
- (void)setT_request_start:;
- (void)setT_start_pre_create_annie:;
- (double)t_finish_pre_create_annie_web;
- (double)t_page_init_start;
- (double)t_page_route_start;
- (double)t_request_end;
- (double)t_start_pre_create_annie;
- (id)toDic;
@end
