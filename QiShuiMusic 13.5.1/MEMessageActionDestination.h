@interface MEMessageActionDestination : NSObject
@property (nonatomic) q mailboxType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (long long)mailboxType;
- (id)initWithDefaultMailboxType:;
+ (BOOL)supportsSecureCoding;
+ (id)archive;
+ (id)inbox;
+ (id)trash;
+ (id)junk;
+ (id)allowedMailboxTypes;
@end
