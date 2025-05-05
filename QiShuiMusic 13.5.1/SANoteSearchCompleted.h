@interface SANoteSearchCompleted : SABaseCommand
@property (nonatomic) NSArray notes;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)notes;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setNotes:;
+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:context:;
@end
