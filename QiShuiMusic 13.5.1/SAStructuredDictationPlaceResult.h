@interface SAStructuredDictationPlaceResult : AceObject
@property (nonatomic) NSString placeResultType;
@property (nonatomic) NSData resultData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)resultData;
- (id)encodedClassName;
- (id)placeResultType;
- (void)setPlaceResultType:;
- (void)setResultData:;
+ (id)structuredDictationPlaceResult;
+ (id)structuredDictationPlaceResultWithDictionary:context:;
@end
