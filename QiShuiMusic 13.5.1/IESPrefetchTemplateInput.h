@interface IESPrefetchTemplateInput : NSObject
@property (nonatomic) NSDictionary variables;
@property (nonatomic) NSString name;
@property (nonatomic) IESPrefetchFlatSchema schema;
@property (nonatomic) NSString traceId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTraceId:;
- (id)schema;
- (void)setName:;
- (id)traceId;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)name;
- (id)variables;
- (void)setVariables:;
@end
