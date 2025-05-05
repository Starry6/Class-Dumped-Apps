@interface SFShareSheetRecipient : NSObject
@property (nonatomic) NSString realName;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSSet formattedHandles;
@property (nonatomic) NSString contactIdentifier;
- (id)init;
- (id)contactIdentifier;
- (id)initWithCoder:;
- (id)displayName;
- (void)encodeWithCoder:;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)formattedHandles;
- (id)realName;
- (id)initWithRealName:displayName:formattedHandles:contactIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
