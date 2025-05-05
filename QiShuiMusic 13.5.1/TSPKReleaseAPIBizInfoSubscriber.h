@interface TSPKReleaseAPIBizInfoSubscriber : NSObject
@property (nonatomic) NSMutableDictionary mutableInfo;
@property (nonatomic) <TSPKLock> lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandelEvent:;
- (id)getTimestampInfoWithDataType:;
- (id)hanleEvent:;
- (id)init;
- (id)uniqueId;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (id)mutableInfo;
- (void)setMutableInfo:;
+ (id)sharedInstance;
@end
