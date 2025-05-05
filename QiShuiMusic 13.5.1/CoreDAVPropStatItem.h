@interface CoreDAVPropStatItem : CoreDAVItem
@property (nonatomic) CoreDAVLeafItem status;
@property (nonatomic) CoreDAVItem prop;
@property (nonatomic) CoreDAVErrorItem errorItem;
@property (nonatomic) CoreDAVLeafItem responseDescription;
- (void)setStatus:;
- (id)prop;
- (id)init;
- (void)setProp:;
- (void)setErrorItem:;
- (void)setResponseDescription:;
- (id)errorItem;
- (void).cxx_destruct;
- (id)description;
- (id)status;
- (id)responseDescription;
+ (id)copyParseRules;
@end
