@interface AFConversationItem : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)revisionIdentifier;
- (id)identifier;
- (long long)presentationState;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)isTransient;
- (id)description;
- (id)copyWithZone:;
- (id)aceObject;
- (id)dialogPhase;
- (id)aceCommandIdentifier;
- (BOOL)isVirgin;
- (BOOL)isSupplemental;
- (BOOL)isImmersiveExperience;
- (id)associatedDataStore;
- (id)initWithIdentifier:revisionIdentifier:type:aceObject:dialogPhase:presentationState:aceCommandIdentifier:virgin:transient:supplemental:immersiveExperience:associatedDataStore:;
- (id)initWithType:aceObject:dialogPhase:presentationState:aceCommandIdentifier:virgin:transient:supplemental:immersiveExperience:associatedDataStore:;
- (id)initWithDelegateItem:;
@end
