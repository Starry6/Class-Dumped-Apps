@interface BDXAProtocolModel : NSObject
@property (nonatomic) NSString protocolText;
@property (nonatomic) NSDictionary clickableTexts;
- (id)clickableTexts;
- (id)initWithProtocolText:clickableTexts:;
- (id)protocolText;
- (void)setClickableTexts:;
- (void)setProtocolText:;
- (id)toDictionary;
- (void).cxx_destruct;
@end
