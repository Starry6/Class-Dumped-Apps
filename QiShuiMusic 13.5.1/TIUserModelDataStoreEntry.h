@interface TIUserModelDataStoreEntry : NSObject
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSString key;
@property (nonatomic) NSString inputMode;
@property (nonatomic) NSNumber value;
@property (nonatomic) NSNumber secondaryValue;
@property (nonatomic) NSNumber realValue;
@property (nonatomic) NSData properties;
- (void)setInputMode:;
- (id)inputMode;
- (void)setProperties:;
- (id)key;
- (void)setKey:;
- (void)setValue:;
- (void)setTimestamp:;
- (id)properties;
- (void).cxx_destruct;
- (id)timestamp;
- (id)value;
- (id)initWithTimestamp:withKey:withInputMode:withValue:withSecondaryValue:withRealValue:withProperties:;
- (id)secondaryValue;
- (void)setSecondaryValue:;
- (id)realValue;
- (void)setRealValue:;
@end
