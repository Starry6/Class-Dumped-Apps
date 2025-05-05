@interface WBSSiriIntelligenceDonorHistoryData : NSObject
@property (nonatomic) NSURL pageURL;
@property (nonatomic) NSString userVisibleURLString;
@property (nonatomic) NSString pageTitle;
@property (nonatomic) NSString fullPageText;
@property (nonatomic) NSString readerText;
@property (nonatomic) NSDate lastVisitedDate;
@property (nonatomic) Q visitCount;
@property (nonatomic) NSArray autocompleteTriggers;
- (unsigned long long)visitCount;
- (void).cxx_destruct;
- (id)userVisibleURLString;
- (id)lastVisitedDate;
- (void)setVisitCount:;
- (id)pageURL;
- (void)setPageURL:;
- (id)autocompleteTriggers;
- (void)setAutocompleteTriggers:;
- (void)setLastVisitedDate:;
- (id)pageTitle;
- (void)setPageTitle:;
- (void)setUserVisibleURLString:;
- (id)fullPageText;
- (void)setFullPageText:;
- (id)readerText;
- (void)setReaderText:;
@end
