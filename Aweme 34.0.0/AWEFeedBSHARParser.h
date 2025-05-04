@interface AWEFeedBSHARParser : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)getKey;
- (id)getResult;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
