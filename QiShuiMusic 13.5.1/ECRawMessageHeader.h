@interface ECRawMessageHeader : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString transmittedName;
@property (nonatomic) NSString body;
- (id)body;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)initWithHeaderFieldName:body:;
- (id)transmittedName;
@end
