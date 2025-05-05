@interface CNDraggingContact : NSObject
@property (nonatomic) CNContact contact;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) NSURL cachedFileURLRepresentation;
- (void)setContactStore:;
- (id)contact;
- (void)setContact:;
- (void).cxx_destruct;
- (id)contactStore;
- (id)fetchContactWithKeys:;
- (id)dataRepresentationForType:;
- (id)initWithContact:contactStore:;
- (id)fileNameForContact:;
- (id)serializeContactToVCard:;
- (id)fileURLRepresentation;
- (void)cleanupFileURLRepresentation;
- (id)cachedFileURLRepresentation;
- (void)setCachedFileURLRepresentation:;
+ (id)os_log;
+ (id)availableDataRepresentationTypes;
@end
