@interface AWEDetailCollectionPerformanceTrackeModel : NSObject
@property (nonatomic) NSString pageName;
@property (nonatomic) NSMutableDictionary eventBeginDictionary;
@property (nonatomic) NSMutableDictionary eventEndDictionary;
- (id)eventBeginDictionary;
- (id)eventEndDictionary;
- (void)setTrackingPageName:;
- (void)eventBegin:;
- (void)eventEnd:;
- (void)setEventBeginDictionary:;
- (void)setEventEndDictionary:;
- (id)init;
- (void).cxx_destruct;
- (id)pageName;
- (void)setPageName:;
@end
