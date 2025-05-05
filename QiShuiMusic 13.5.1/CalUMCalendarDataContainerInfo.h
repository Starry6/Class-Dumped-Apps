@interface CalUMCalendarDataContainerInfo : NSObject
@property (nonatomic) NSString accountID;
@property (nonatomic) NSString personaID;
@property (nonatomic) NSURL containerURL;
@property (nonatomic) BOOL usesDataSeparatedContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)personaID;
- (id)initWithPersonaID:;
- (id)accountID;
- (void).cxx_destruct;
- (id)containerURL;
- (id)initWithAccountID:;
- (BOOL)usesDataSeparatedContainer;
+ (id)_calendarGroupContainer;
@end
