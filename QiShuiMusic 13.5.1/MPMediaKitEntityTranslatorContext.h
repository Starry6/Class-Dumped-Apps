@interface MPMediaKitEntityTranslatorContext : NSObject
@property (nonatomic) NSString personID;
@property (nonatomic) <MPMediaKitEntityRelationshipPayloadProvider> relationshipPayloadProvider;
- (id)relationshipPayloadProvider;
- (id)personID;
- (void)setPersonID:;
- (void)setRelationshipPayloadProvider:;
- (void).cxx_destruct;
@end
