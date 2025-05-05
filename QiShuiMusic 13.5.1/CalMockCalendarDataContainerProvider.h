@interface CalMockCalendarDataContainerProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerForAccountIdentifier:;
- (id)initWithCoder:;
- (id)containerInfoForAccountIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)accountUsesDataSeparatedContainer:;
- (id)containerInfoForPersonaIdentifier:;
- (id)initWithCalendarDataContainerURL:;
- (id)initWithAccountDataContainerMap:defaultDataContainer:;
- (id)personaForAccountIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
