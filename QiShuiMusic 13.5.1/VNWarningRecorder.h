@interface VNWarningRecorder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)warnings;
- (void)setWarnings:;
- (void)recordWarning:value:;
- (id)valueForWarning:;
- (BOOL)hasWarnings;
- (void)recordWarnings:;
@end
