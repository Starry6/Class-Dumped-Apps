@interface AWEPackContext : NSObject
@property (nonatomic) AWEPackRequest request;
@property (nonatomic) NSArray idList;
@property (nonatomic) NSArray materialList;
@property (nonatomic) NSDictionary materialMap;
- (void)setIdList:;
- (id)idList;
- (void)setMaterialList:;
- (id)materialList;
- (id)initWithRequest:materialClass:;
- (id)materialMap;
- (void)setMaterialMap:;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)request;
@end
