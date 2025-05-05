@interface FASharedServiceGroup : NSObject
@property (nonatomic) NSString headerText;
@property (nonatomic) NSString footerText;
@property (nonatomic) NSNumber groupID;
@property (nonatomic) NSArray services;
- (id)headerText;
- (void)setGroupID:;
- (id)groupID;
- (void)setFooterText:;
- (void)setServices:;
- (id)footerText;
- (void).cxx_destruct;
- (id)description;
- (id)services;
- (id)initWithServerResponse:;
- (void)setHeaderText:;
@end
