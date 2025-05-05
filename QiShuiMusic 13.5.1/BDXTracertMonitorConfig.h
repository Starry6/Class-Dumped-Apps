@interface BDXTracertMonitorConfig : NSObject
@property (nonatomic) NSString tracertID;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString containerType;
@property (nonatomic) NSString containerVersion;
@property (nonatomic) NSDictionary commonCategory;
- (id)commonCategory;
- (id)containerVersion;
- (void)setCommonCategory:;
- (void)setContainerVersion:;
- (void)setTracertID:;
- (id)tracertID;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)containerType;
- (void)setContainerType:;
@end
