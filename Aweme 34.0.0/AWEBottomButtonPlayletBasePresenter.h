@interface AWEBottomButtonPlayletBasePresenter : NSObject
@property (nonatomic) <AWEPlayInteractionBottomButtonComponentProtocol> delegate;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWECodeGenEntertainmentButtonInfoModel buttonInfo;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (id)logExtraDict;
- (id)buttonInfo;
- (void)handleButtonClick;
- (id)initWithModel:referString:logExtraDict:buttonInfo:;
- (id)delegate;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
