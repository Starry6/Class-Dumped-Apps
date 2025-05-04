@interface AWETemplateInterestDiscoverBarManager : NSObject
@property (nonatomic) NSDateFormatter logDateFormatter;
@property (nonatomic) NSMutableArray showedArray;
@property (nonatomic) q currentPlayVideoCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow:;
- (long long)currentPlayVideoCount;
- (void)setCurrentPlayVideoCount:;
- (id)showedArray;
- (id)logDateFormatter;
- (id)getAlogTimeString:;
- (void)setShowedArray:;
- (void)setLogDateFormatter:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
