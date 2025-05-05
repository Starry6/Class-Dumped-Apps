@interface NoteBodyObject : NSManagedObject
@property (nonatomic) <ICSearchIndexable> targetSearchIndexable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString content;
@property (nonatomic) NSString contentAsPlainText;
@property (nonatomic) NoteObject owner;
@property (nonatomic) NSData externalRepresentation;
@property (nonatomic) NSString externalContentRef;
- (id)contentAsPlainText;
- (id)targetSearchIndexable;
- (id)contentAsPlainTextPreservingNewlines;
@end
