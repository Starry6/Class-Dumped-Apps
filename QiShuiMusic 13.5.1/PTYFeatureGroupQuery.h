@interface PTYFeatureGroupQuery : NSObject
@property (nonatomic) NSString groupName;
@property (nonatomic) NSArray featureQuerys;
- (id)featureQuerys;
- (id)getFeatureGroupQuery;
- (void).cxx_destruct;
- (id)groupName;
- (id)initWithGroupName:;
- (void)addQuery:;
@end
