@interface LSWeakProxy : NSObject
@property (nonatomic) <NSObject> weakObject;
- (id)weakObject;
- (void).cxx_destruct;
- (void)setWeakObject:;
+ (id)LS_GET_WEAK_ASSOCIATE:withKey:;
@end
