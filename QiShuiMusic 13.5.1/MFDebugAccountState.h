@interface MFDebugAccountState : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSArray lastKnownCapabilities;
@property (nonatomic) MailAccount mailAccount;
- (id)identifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setIdentifier:;
- (void)setMailAccount:;
- (id)mailAccount;
- (id)lastKnownCapabilities;
- (id)initWithStateEventDictionary:identifier:lastKnownCapabilities:;
- (void)setLastKnownCapabilities:;
@end
