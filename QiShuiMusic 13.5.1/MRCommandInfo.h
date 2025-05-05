@interface MRCommandInfo : NSObject
@property (nonatomic) _MRCommandInfoProtobuf protobuf;
@property (nonatomic) I command;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSDictionary options;
@property (nonatomic) NSData data;
@property (nonatomic) NSData propertyListData;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (void)setOptions:;
- (id)initWithProtobuf:;
- (id)data;
- (id)protobuf;
- (id)initWithPropertyListData:;
- (unsigned long long)hash;
- (unsigned int)command;
- (id)options;
- (id)initWithData:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)propertyListData;
- (BOOL)isEqual:;
- (void)setCommand:;
- (BOOL)isEnabled;
+ (BOOL)isCommandActuallySupportedEvenWhenDisabled:;
+ (id)commandInfosFromData:;
+ (id)dataFromCommandInfos:;
@end
