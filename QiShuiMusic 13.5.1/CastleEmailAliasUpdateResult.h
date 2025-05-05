@interface CastleEmailAliasUpdateResult : NSObject
@property (nonatomic) NSDictionary receiveEmailAliasAddresses;
@property (nonatomic) NSDictionary emailAddresses;
@property (nonatomic) NSString defaultEmailAddress;
@property (nonatomic) BOOL accountNeedsToUpdateProperties;
@property (nonatomic) NSString entityTag;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL notModified;
- (BOOL)isSuccess;
- (id)emailAddresses;
- (id)init;
- (void).cxx_destruct;
- (id)entityTag;
- (id)defaultEmailAddress;
- (id)receiveEmailAliasAddresses;
- (id)initWithReceiveEmailAliasAddresses:emailAddresses:defaultEmailAddress:entityTag:isSuccess:notModified:accountNeedsToUpdateProperties:;
- (BOOL)accountNeedsToUpdateProperties;
- (BOOL)notModified;
@end
