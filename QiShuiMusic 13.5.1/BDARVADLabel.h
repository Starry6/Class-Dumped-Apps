@interface BDARVADLabel : JSONModel
@property (nonatomic) NSString<Optional> text;
@property (nonatomic) NSString<Optional> color_text;
@property (nonatomic) NSString<Optional> color;
@property (nonatomic) NSNumber<Optional> type;
- (id)color_text;
- (void)setColor_text:;
- (void)setColor:;
- (void)setText:;
- (void)setType:;
- (id)color;
- (id)type;
- (void).cxx_destruct;
- (id)text;
@end
