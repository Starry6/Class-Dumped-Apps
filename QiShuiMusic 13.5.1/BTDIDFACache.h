@interface BTDIDFACache : NSObject
@property (nonatomic) NSString idfaString;
@property (nonatomic) NSString idfvString;
- (id)idfaString;
- (id)idfvString;
- (void)setIdfaString:;
- (void)setIdfvString:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
