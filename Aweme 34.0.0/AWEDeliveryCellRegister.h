@interface AWEDeliveryCellRegister : NSObject
@property (nonatomic) NSMutableDictionary cellModelsDictM;
@property (nonatomic) NSDictionary messageBodyTypeDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)modelClassWithBodyType:message:;
- (id)cellModelsDictM;
- (void)registerCellModelClass:withMessageType:;
- (id)allCellModels;
- (void)registerAllCellModelClass;
- (id)messageBodyTypeDict;
- (void)setCellModelsDictM:;
- (void)setMessageBodyTypeDict:;
- (void).cxx_destruct;
@end
