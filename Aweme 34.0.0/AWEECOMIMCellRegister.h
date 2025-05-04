@interface AWEECOMIMCellRegister : NSObject
@property (nonatomic) NSMutableDictionary cellModelsDictM;
@property (nonatomic) NSDictionary messageBodyTypeDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)modelClassWithBodyType:message:;
- (id)cellModelsDictM;
- (id)allCellModels;
- (void)registerAllCellModelClass;
- (id)messageBodyTypeDict;
- (void)setCellModelsDictM:;
- (void)setMessageBodyTypeDict:;
- (void)registerCellModelClass:withMessgeType:;
- (id)init;
- (void).cxx_destruct;
@end
