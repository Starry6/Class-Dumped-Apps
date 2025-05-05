@interface CNSaveRequestContactIdentifierCollector : NSObject
@property (nonatomic) CNSaveRequest request;
@property (nonatomic) NSMutableArray allIdentifiers;
@property (nonatomic) NSMutableArray insertedIdentifiers;
@property (nonatomic) NSArray allContactIdentifiers;
@property (nonatomic) NSArray insertedContactIdentifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)visitUpdateContactEvent:;
- (id)allContactIdentifiers;
- (void)visitAddContactEvent:;
- (void)visitDeleteContactEvent:;
- (void)visitDropEverythingEvent:;
- (id)allIdentifiers;
- (void)visitUnlinkContactEvent:;
- (void)visitPreferredContactForNameEvent:;
- (id)request;
- (void)visitPreferredContactForImageEvent:;
- (void).cxx_destruct;
- (void)visitLinkContactsEvent:;
- (void)visitDifferentMeCardEvent:;
- (id)initWithSaveRequest:;
- (void)collectIdentifiers;
- (id)insertedContactIdentifiers;
- (id)insertedIdentifiers;
@end
