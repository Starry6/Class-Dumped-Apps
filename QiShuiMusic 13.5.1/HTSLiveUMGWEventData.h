@interface HTSLiveUMGWEventData : GPBMessage
@property (nonatomic) NSInteger service;
@property (nonatomic) NSInteger method;
@property (nonatomic) q token;
@property (nonatomic) NSMutableArray paramsArray;
@property (nonatomic) Q paramsArray_Count;
@property (nonatomic) NSData payload;
+ (id)descriptor;
@end
