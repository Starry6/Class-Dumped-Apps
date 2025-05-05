@interface WBSParsecSportsImage : WBSParsecModel
@property (nonatomic) q alignment;
@property (nonatomic) WBSParsecImageRepresentation imageRepresentation;
@property (nonatomic) NSString label;
@property (nonatomic) NSString name;
- (id)initWithDictionary:;
- (id)label;
- (void).cxx_destruct;
- (id)imageRepresentation;
- (id)name;
- (long long)alignment;
+ (id)schema;
@end
