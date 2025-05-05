@interface PETProtobufRawDecoder : NSObject
+ (id)filterProtobufData:onField:onNestedMessageEnd:;
+ (id)filterProtobufData:withWhitelist:;
@end
