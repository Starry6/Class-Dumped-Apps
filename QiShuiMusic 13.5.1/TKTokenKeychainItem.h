@interface TKTokenKeychainItem : NSObject
@property (nonatomic) NSMutableDictionary keychainAttributes;
@property (nonatomic) NSData encodedObjectID;
@property (nonatomic) TKTokenID tokenID;
@property (nonatomic) NSData accessControl;
@property (nonatomic) @ objectID;
@property (nonatomic) NSString label;
@property (nonatomic) NSDictionary constraints;
- (id)objectID;
- (id)accessControl;
- (id)tokenID;
- (void)setLabel:;
- (id)constraints;
- (id)label;
- (void)setConstraints:;
- (id)keychainAttributes;
- (void)setAccessControl:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObjectID:;
- (id)initWithItemInfo:;
- (void)setTokenID:;
+ (id)operationMap;
+ (id)accessControlForConstraints:tokenID:error:;
+ (id)keychainItemWithInfo:;
@end
