@interface BDARVMetaModel : NSObject
@property (nonatomic) BDARVStyle style;
@property (nonatomic) NSDictionary data;
@property (nonatomic) BDARVDataModel dataModel;
@property (nonatomic) NSDictionary components;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)components;
- (void)setComponents:;
- (id)templateURL;
- (id)data;
- (id)initWithDictionary:error:;
- (void)setStyle:;
- (void).cxx_destruct;
- (void)setData:;
- (id)style;
- (id)dataModel;
- (void)setDataModel:;
@end
