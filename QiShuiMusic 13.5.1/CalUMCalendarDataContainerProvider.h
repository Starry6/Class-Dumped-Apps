@interface CalUMCalendarDataContainerProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerForAccountIdentifier:;
- (id)containerInfoForAccountIdentifier:;
- (BOOL)accountUsesDataSeparatedContainer:;
- (id)containerInfoForPersonaIdentifier:;
+ (id)sharedInstance;
@end
