@interface AWETransformerBaseElementParser : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__parseElement:withDictionary:;
- (void)parseElement:withData:;
- (void)parseElement:withStyle:;
- (void)parseElement:withLayout:;
- (void)__parseElement:withEvents:;
- (void)__parseElement:withTemplateEvent:;
- (void)parseElement:withDictionary:;
- (void)parseElement:withTemplateData:;
@end
