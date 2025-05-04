@interface AWESpecialCardCancelSubscribeSheetConfig : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary extraDict;
@property (nonatomic) NSString title;
@property (nonatomic) @? keepSubscribeSelection;
@property (nonatomic) @? cancelSubscribeSelection;
@property (nonatomic) @? maskAreaClicked;
- (id)referString;
- (void)setReferString:;
- (id)extraDict;
- (void)setExtraDict:;
- (void)setCancelSubscribeSelection:;
- (id)keepSubscribeSelection;
- (void)setKeepSubscribeSelection:;
- (id)cancelSubscribeSelection;
- (id)maskAreaClicked;
- (void)setMaskAreaClicked:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)copyWithZone:;
@end
