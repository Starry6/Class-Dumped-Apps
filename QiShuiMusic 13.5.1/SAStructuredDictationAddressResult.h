@interface SAStructuredDictationAddressResult : AceObject
@property (nonatomic) NSString addressLabel;
@property (nonatomic) NSURL contactId;
@property (nonatomic) NSString contactName;
@property (nonatomic) NSData forwardGeoProtobuf;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contactName;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)contactId;
- (void)setContactId:;
- (void)setContactName:;
- (id)addressLabel;
- (void)setAddressLabel:;
- (id)forwardGeoProtobuf;
- (void)setForwardGeoProtobuf:;
+ (id)structuredDictationAddressResult;
+ (id)structuredDictationAddressResultWithDictionary:context:;
@end
