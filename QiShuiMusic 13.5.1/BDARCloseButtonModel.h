@interface BDARCloseButtonModel : NSObject
@property (nonatomic) NSString closeIcon;
@property (nonatomic) NSString unfinishedTemplate;
@property (nonatomic) NSString finishedTemplate;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)closeIcon;
- (id)extraParams;
- (id)finishedTemplate;
- (void)setCloseIcon:;
- (void)setFinishedTemplate:;
- (void)setUnfinishedTemplate:;
- (id)unfinishedTemplate;
- (id)initWithDict:;
- (void).cxx_destruct;
- (id)toDict;
@end
