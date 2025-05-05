@interface TSPKAPICostTimeManager : NSObject
@property (nonatomic) NSMutableDictionary uploaderDic;
@property (nonatomic) <TSPKLock> lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandelEvent:;
- (void)setUploaderDic:;
- (id)hanleEvent:;
- (id)uploaderDic;
- (id)init;
- (id)uniqueId;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)sharedInstance;
@end
