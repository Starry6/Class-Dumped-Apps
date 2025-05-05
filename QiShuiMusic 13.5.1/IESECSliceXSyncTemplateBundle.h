@interface IESECSliceXSyncTemplateBundle : NSObject
@property (nonatomic) <IESECSliceXTemplateMetaData> metaData;
@property (nonatomic) NSDictionary jsonDict;
@property (nonatomic) NSString url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithName:version:jsonDict:;
- (id)initWithName:version:url:;
- (id)url;
- (id)metaData;
- (void).cxx_destruct;
- (id)jsonDict;
@end
