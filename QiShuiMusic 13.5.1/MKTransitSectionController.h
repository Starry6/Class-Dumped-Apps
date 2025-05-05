@interface MKTransitSectionController : NSObject
@property (nonatomic) <GEOTransitSystem> system;
@property (nonatomic) NSDate departureCutoffDate;
@property (nonatomic) NSDate expiredHighFrequencyCutoffDate;
@property (nonatomic) NSSet incidentEntitiesToExclude;
@property (nonatomic) Q numberOfFilteredLines;
@property (nonatomic) MKTransitSectionPagingFilter _pagingFilter;
- (id)init;
- (id)system;
- (void).cxx_destruct;
- (unsigned long long)numberOfRows;
- (id)initWithMapItem:system:;
- (void)setDepartureCutoffDate:;
- (void)setExpiredHighFrequencyCutoffDate:;
- (void)setIncidentEntitiesToExclude:;
- (void)incrementPagingFilter;
- (BOOL)hasFilteredRows;
- (BOOL)hasFilteredLines;
- (id)linesToShow;
- (BOOL)_needsBuildRows;
- (void)_setNeedsBuildRows;
- (void)_buildRows;
- (id)departureCutoffDate;
- (id)expiredHighFrequencyCutoffDate;
- (id)incidentEntitiesToExclude;
- (unsigned long long)numberOfFilteredLines;
- (id)_pagingFilter;
@end
