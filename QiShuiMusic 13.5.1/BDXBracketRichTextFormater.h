@interface BDXBracketRichTextFormater : NSObject
@property (nonatomic) <BDXBracketRichTextFormaterUIDelegate> UIDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)formateRawText:defaultAttibutes:;
- (void).cxx_destruct;
- (void)setUIDelegate:;
- (id)UIDelegate;
+ (id)sharedFormater;
@end
