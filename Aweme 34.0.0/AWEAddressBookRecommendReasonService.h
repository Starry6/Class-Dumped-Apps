@interface AWEAddressBookRecommendReasonService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recommendReasonRelationTemplateWithUser:;
- (id)recommendReasonTemplateWithUser:;
- (id)encodedRecommendReasonTemplateWithUser:;
- (id)recommendDisplayNameWithUser:;
- (id)recommendDisplayRecommendReasonWithUser:;
- (id)recommendDisplayRecommendReasonWithUser:useDefaultText:;
- (id)recommendReasonDataWithUser:;
- (id)fansDisplayNameWithUser:;
- (BOOL)enableDisplayContactsNameWithUser:;
@end
