@interface FLEXFirebaseSetDataInfo : NSObject
@property (nonatomic) NSDictionary documentData;
@property (nonatomic) NSNumber merge;
@property (nonatomic) NSArray mergeFields;
- (id)documentData;
- (id)merge;
- (id)mergeFields;
- (void).cxx_destruct;
+ (id)data:merge:mergeFields:;
@end
