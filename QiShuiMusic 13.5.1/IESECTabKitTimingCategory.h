@interface IESECTabKitTimingCategory : NSObject
@property (nonatomic) NSString bizTag;
@property (nonatomic) NSString entranceLocation;
@property (nonatomic) Q pageModal;
@property (nonatomic) NSDictionary bizCustomCategory;
@property (nonatomic) Q bizMode;
@property (nonatomic) q enablePreProcessAnnie;
@property (nonatomic) q enableAnnieWebCache;
- (unsigned long long)bizMode;
- (id)bizCustomCategory;
- (id)bizTag;
- (long long)enableAnnieWebCache;
- (long long)enablePreProcessAnnie;
- (id)entranceLocation;
- (unsigned long long)pageModal;
- (void)setBizCustomCategory:;
- (void)setBizMode:;
- (void)setBizTag:;
- (void)setEnableAnnieWebCache:;
- (void)setEnablePreProcessAnnie:;
- (void)setEntranceLocation:;
- (void)setPageModal:;
- (id)toDic;
- (void).cxx_destruct;
@end
