@interface AWEElementBlackListFilterStrategy : NSObject
@property (nonatomic) NSSet blackList;
@property (nonatomic) q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)blackList;
- (void)setBlackList:;
- (id)filterElements:context:buildContext:;
- (id)init;
- (long long)priority;
- (void).cxx_destruct;
+ (BOOL)activateWithContext:;
@end
