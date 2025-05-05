@interface APSMultiUserFS : NSObject
@property (nonatomic) BOOL isMultiUser;
- (id)initWithIsMultiUserMode:;
- (void).cxx_destruct;
- (id)systemPath;
- (BOOL)isMultiUser;
+ (id)sharedInstance;
@end
