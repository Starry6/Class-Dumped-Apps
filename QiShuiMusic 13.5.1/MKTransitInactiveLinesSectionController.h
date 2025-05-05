@interface MKTransitInactiveLinesSectionController : MKTransitSectionController
@property (nonatomic) NSArray inactiveLines;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_newStationCardUIEnabled;
- (void)_setNeedsBuildRows;
- (void)_buildRows;
- (id)_pagingFilter;
- (id)initWithMapItem:system:line:;
- (id)inactiveLines;
@end
